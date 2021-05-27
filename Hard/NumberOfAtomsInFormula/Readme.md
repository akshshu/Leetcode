## Given a chemical formula (given as a string), return the count of each atom. <br> <br> 
The atomic element always starts with an uppercase character, then zero or more lowercase letters, representing the name. <br> <br> 
One or more digits representing that element's count may follow if the count is greater than 1. If the count is 1, no digits will follow. For example, H2O and H2O2 are possible, but H1O2 is impossible. <br> <br> 
Two formulas concatenated together to produce another formula. For example, H2O2He3Mg4 is also a formula. <br> <br> 
A formula placed in parentheses, and a count (optionally added) is also a formula. For example, (H2O2) and (H2O2)3 are formulas. <br> <br> 
Given a formula, return the count of all elements as a string in the following form: the first name (in sorted order), followed by its count (if that count is more than 1), followed by the second name (in sorted order), followed by its count (if that count is more than 1), and so on. <br> 
