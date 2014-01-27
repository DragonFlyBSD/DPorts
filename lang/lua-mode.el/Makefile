# Created by: Josh Elsasser <jre@vineyard.net>
# $FreeBSD: lang/lua-mode.el/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	lua-mode.el
PORTVERSION=	1.26
PORTREVISION=	1
CATEGORIES=	lang elisp
MASTER_SITES=	http://lua-users.org/files/wiki_insecure/editors/
DISTNAME=	lua-mode.el
EXTRACT_SUFX=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	jre@vineyard.net
COMMENT=	Emacs/XEmacs major mode for editing Lua scripts

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

EMACSLISPDIR=	${PREFIX}/share/emacs/site-lisp
XEMACSLISPDIR=	${PREFIX}/lib/xemacs/site-lisp

PLIST_FILES=	share/emacs/site-lisp/lua-mode.el lib/xemacs/site-lisp/lua-mode.el
PLIST_DIRS=	lib/xemacs/site-lisp lib/xemacs

NO_STAGE=	yes
do-install:
	${MKDIR} ${EMACSLISPDIR}
	${MKDIR} ${XEMACSLISPDIR}
	${INSTALL_DATA} ${_DISTDIR}/${DISTNAME} ${EMACSLISPDIR}/lua-mode.el
	${LN} -sf ${EMACSLISPDIR}/lua-mode.el ${XEMACSLISPDIR}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
