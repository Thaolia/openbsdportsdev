
To prevent "merge commits" from showing up in git log, it's recommended to either update your tree with:

	cd /usr/ports/mystuff/ && git fetch && git rebase origin
	or
	cd /usr/ports && rm -fr mystuff && git clone https://github.com/Thaolia/openbsdportsdev.git && mv openbsdportsdev mystuff


