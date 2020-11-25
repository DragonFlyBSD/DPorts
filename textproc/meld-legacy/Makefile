# DPORT

PORTNAME=	meld
PORTVERSION=	1.8.6
PORTREVISION=	1
PKGNAMESUFFIX=	-legacy
CATEGORIES=	textproc devel python
MASTER_SITES=	GNOME

MAINTAINER=	zrj@ef.irc
COMMENT=	Minimalistic GNOME 2 visual diff and merge tool

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		desktop-file-utils gmake shared-mime-info tar:xz

# not needed, roll manually with resed
#USES+=		gnome
#USE_GNOME=	intltool

BUILD_DEPENDS=	${LOCALBASE}/bin/python-legacy:lang/python-legacy
RUN_DEPENDS=	${LOCALBASE}/bin/python-legacy:lang/python-legacy

BUILD_DEPENDS+=	pylgobject-codegen-2.0:devel/pyl-gobject
RUN_DEPENDS+=	pyl-gtk2>=0:x11-toolkits/pyl-gtk2 pyl-gobject>=0:devel/pyl-gobject

MAKE_ARGS=	prefix=${PREFIX}

OPTIONS_DEFINE=		SYNTAX
OPTIONS_DEFAULT=	SYNTAX
SYNTAX_DESC=	Syntax highlight runtime dependencies

SYNTAX_RUN_DEPENDS=	pyl-gtksourceview>0:x11-toolkits/pyl-gtksourceview \
			adwaita-icon-theme>=0:x11-themes/adwaita-icon-theme

DATADIR=	${PREFIX}/share/meld-legacy

post-patch:
	${REINPLACE_CMD} -e "s@/usr/bin/env python@${LOCALBASE}/bin/python-legacy@g" \
		${WRKSRC}/bin/meld
	${REINPLACE_CMD} -e 's@[[:<:]]pygtk[[:>:]]@pylgtk@g' \
		${WRKSRC}/bin/meld
	${REINPLACE_CMD} -e '/PYTHON/s@python@python-legacy@g' \
			 -e '/libdir_/s@meld@meld-legacy@g' \
			 -e '/sharedir_/s@meld@meld-legacy@g' \
		${WRKSRC}/INSTALL
	${REINPLACE_CMD} -e '/-C po/d' -e '/-C help/d' \
			 -e 's@$$(DESTDIR)\$$(helpdir_)@@g' \
			 -e 's@update_mime_database)@update_mime_database_not)@g' \
			 -e 's@update_desktop_database)@update_desktop_database_not)@g' \
			 -e 's@intltool-merge -d po @cp @g' \
		${WRKSRC}/Makefile
	${REINPLACE_CMD} -e 's@^_@@g' \
		${WRKSRC}/data/meld.desktop.in

post-install:
	${MV} ${STAGEDIR}${LOCALBASE}/bin/meld ${STAGEDIR}${LOCALBASE}/bin/meld-legacy

.include <bsd.port.mk>
