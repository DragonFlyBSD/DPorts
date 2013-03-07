# Created by: Uffe Jakobsen <uffe@uffe.org>
# $FreeBSD: ports/x11-wm/obkey/Makefile,v 1.1 2013/02/25 02:49:44 svnexp Exp $

PORTNAME=	obkey
PORTVERSION=	1.0
CATEGORIES=	x11-wm python
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	uffe@uffe.org
COMMENT=	Openbox hotkey editor, written in Python and PyGTK

LICENSE=	MIT

RUN_DEPENDS=	py2[67]-gtk>=2.14:${PORTSDIR}/x11-toolkits/py-gtk2

USE_GETTEXT=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PORTDOCS=	NEWS

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e 's,python,env &,' \
		${WRKSRC}/obkey ${WRKSRC}/obkey_classes.py
	@${REINPLACE_CMD} -e '/config_prefix/s,/usr,${LOCALBASE},' \
		${WRKSRC}/obkey_classes.py

post-install:
	@${MKDIR} ${DESKTOPDIR}
	${INSTALL_DATA} ${WRKSRC}/misc/obkey.desktop ${DESKTOPDIR}
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/NEWS ${DOCSDIR}
.endif

.include <bsd.port.mk>
