
class RangeModule
{
public:
    map<int, int> record;
    RangeModule()
    {
        record.clear();
    }

    void addRange(int left, int right)
    {
        vector<map<int, int>::iterator> iterstore;
        for (auto iter = record.begin(); iter != record.end(); ++iter)
        {
            int first_el = iter->first, second_el = iter->second;
            if (right < first_el || left > second_el)
                continue;
            iterstore.push_back(iter);
            left = min(left, first_el);
            right = max(right, second_el);
        }
        for (auto x : iterstore)
            record.erase(x);
        record[left] = right;
    }
    bool queryRange(int left, int right)
    {
        auto s = record.upper_bound(left);
        if (s == record.begin())
            return false;
        s--;
        return s->first <= left && s->second >= right;
    }
    void removeRange(int left, int right)
    {
        vector<map<int, int>::iterator> iterstore;
        vector<pair<int, int>> el;
        for (auto iter = record.begin(); iter != record.end(); ++iter)
        {
            int first_el = iter->first, second_el = iter->second;
            if (right < first_el || left > second_el)
                continue;
            iterstore.push_back(iter);
            if (left > first_el)
                el.push_back({first_el, left});
            if (right < second_el)
            {
                el.push_back({right, second_el});
                break;
            }
        }
        for (auto x : iterstore)
            record.erase(x);
        for (auto x : el)
            record[x.first] = x.second;
    }
};
