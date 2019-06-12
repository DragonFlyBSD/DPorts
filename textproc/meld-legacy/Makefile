# DPORT

PORTNAME=	meld
PORTVERSION=	1.8.6
PKGNAMESUFFIX=	-legacy
CATEGORIES=	textproc devel python
MASTER_SITES=	GNOME

MAINTAINER=	zrj@ef.irc
COMMENT=	Minimalistic GNOME 2 visual diff and merge tool

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		desktop-file-utils gmake gnome python:2.7 shared-mime-info shebangfix tar:xz
USE_GNOME=	intltool #pygtk2 #pygobject
USE_PYTHON=	noflavors

# ports framework broken for py-cairo@py27 --> devel/gobject-introspection, must install first
# BUILD_DEPENDS=	gobject-introspection>=0.6.8:devel/gobject-introspection
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/gtk-2.0/gtk/__init__.py:x11-toolkits/py-gtk2@${PY_FLAVOR}

CONFLICTS_INSTALL=	meld

SHEBANG_FILES=	bin/meld
#INSTALLS_ICONS=	yes
#INSTALLS_OMF=	yes

SHEBANG_FILES=	bin/meld
MAKE_ARGS=	prefix=${PREFIX}

OPTIONS_DEFINE=		SYNTAX
OPTIONS_DEFAULT=	SYNTAX
SYNTAX_DESC=	Syntax highlight runtime dependencies

SYNTAX_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gtksourceview>0:x11-toolkits/py-gtksourceview \
			adwaita-icon-theme>=0:x11-themes/adwaita-icon-theme

post-patch:
	${REINPLACE_CMD} -e '/PYTHON/s@python@python2.7@g' ${WRKSRC}/INSTALL
	${REINPLACE_CMD} -e '/-C po/d' -e '/-C help/d' \
			 -e 's@$$(DESTDIR)\$$(helpdir_)@@g' \
			 -e 's@update_mime_database)@update_mime_database_not)@g' \
			 -e 's@update_desktop_database)@update_desktop_database_not)@g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
