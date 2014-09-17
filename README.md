
To prevent "merge commits" from showing up in git log, it's recommended to either update your tree with:

 cd /usr/ports/mystuff/ && git fetch && git rebase origin


