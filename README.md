

tucp is command similar to cp command.
It is used to copy files or a group of files. It creates an exact image (copy) of a file found on a disk

• If the tucp command contains two file names, then it copies the contents of the 1st 
file to the 2nd file. If the 2nd file doesn’t exist, then it first creates a file with the 
specified name and the content of the first file is copied to it. But if the second file 
already exists, then it is simply overwritten without any warning. 

• If the tucp command has one or more arguments specifying source file names and 
following those arguments, an argument specifying a directory name, then the 
command copies each source file to the destination directory with the same source 
file name. The destination file is created if did not exist, or overwritten if it already 
existed. 

• The Linux function stat() can be used to determine information about a file. The stat 
struct returned by the function includes a field, st_mode , that can be used to 
determine if the path evaluated by stat() is a file or a directory. Use man to learn 
about the functions stat() and inode(). 
