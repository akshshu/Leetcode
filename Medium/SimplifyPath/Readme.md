## Given a string path, which is an absolute path (starting with a slash '/') to a file or directory in a Unix-style file system, convert it to the simplified canonical path. <br> <br> 
In a Unix-style file system, a period '.' refers to the current directory, a double period '..' refers to the directory up a level, and any multiple consecutive slashes (i.e. '//') are treated as a single slash '/'. For this problem, any other format of periods such as '...' are treated as file/directory names. <br> <br> 
The canonical path should have the following format: <br> <br> 
The path starts with a single slash '/'. <br> 
Any two directories are separated by a single slash '/'. <br> 
The path does not end with a trailing '/'. <br> 
The path only contains the directories on the path from the root directory to the target file or directory (i.e., no period '.' or double period '..') <br> 
Return the simplified canonical path. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: path = "/home/" <br> 
Output: "/home" <br> 
Explanation: Note that there is no trailing slash after the last directory name. <br> 
Example 2: <br> <br> 
Input: path = "/../" <br> 
Output: "/" <br> 
Explanation: Going one level up from the root directory is a no-op, as the root level is the highest level you can go. <br> 
Example 3: <br> <br> 
Input: path = "/home//foo/" <br> 
Output: "/home/foo" <br> 
Explanation: In the canonical path, multiple consecutive slashes are replaced by a single one. <br> 
Example 4: <br> <br> 
Input: path = "/a/./b/../../c/" <br> 
Output: "/c" <br> <br> <br> 
Constraints: <br> <br> 
1 <= path.length <= 3000 <br> 
path consists of English letters, digits, period '.', slash '/' or '_'. <br> 
path is a valid absolute Unix path. <br> 
