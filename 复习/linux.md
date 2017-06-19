# Linux课程个人总结

# 常用命令


    1. 在多个虚拟控制台之间切换在字符方式下：Alt+F1 ~ Alt + F6在图形方式下：Ctrl+Alt+F1 ~ Ctrl+Alt+F6
    切换到图形环境默认为Alt + F7或者Ctrl+Alt+F6
    2. 提示符:超级用户：＃普通用户：$
    3. 关机命令：init 0;halt;shutdown -h +5;
    4. 重新启动命令：init 6;reboot;shutdown -r +5;
    5. shutdown 命令－k 只是警告，不实际关机;－r 关机后重新启动;－h 关闭系统;
    6. who 列出所有正在使用系统的用户、所用终端名和注册到系统的时间
    7. passwd 修改用户密码
    8. ls -lc filename 列出文件的 ctime （最后更改时间）;ls -lu filename 列出文件的 atime（最后存取时间）;ls -l filename 列出文件的 mtime （最后修改时间）
    9. touch命令将会修改指定文件的时间标签，把已存在文件的时间标签更新为系统当前的时间（默认方式），它们的数据将原封不动地保留下来。如果该文件尚未存在，则建立一个空的新文件。-a  仅改变指定文件的存取时间;-c，--no-create  不创建任何文件。-m  仅改变指定文件的修改时间。    -t  STAMP    使用STAMP指定的时间标签，而不是系统当前的时间 。（touch -c -t 0906270730 file）
    10. grep 匹配
    11. sort [file1] -o [file2] 排序
    12. uniq [file1] [file2] 驱虫
    13. comm [-123] [file1] [file2] 对排序好的文件比较
    
