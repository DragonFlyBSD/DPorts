# Created by: Edwin Groothuis (edwin@mavetju.org)
# $FreeBSD: net/smm++/Makefile 339701 2014-01-14 16:59:44Z gahr $

PORTNAME=	smm++
PORTVERSION=	6.1.1
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	SF/smm/smm/${PORTVERSION}
DISTNAME=	smm611
EXTRACT_SUFX=	.tgz

MAINTAINER=	edwin@mavetju.org
COMMENT=	Graphical mudclient with mapper

RUN_DEPENDS=	${LOCALBASE}/lib/iwidgets4.0.1/iwidgets.tcl:${PORTSDIR}/x11-toolkits/iwidgets
BUILD_DEPENDS=	${LOCALBASE}/lib/libitk.so:${PORTSDIR}/x11-toolkits/itk \
		${LOCALBASE}/lib/libitcl.so:${PORTSDIR}/lang/itcl

WRKSRC=		${WRKDIR}/smm/Install.unix
USES=		gmake tk
EXTRACT_AFTER_ARGS=--exclude CVS

MAKE_ENV+=	STAGEDIR=${STAGEDIR}

post-patch:
	${REINPLACE_CMD} -e 's,itkarray=.*,itkarray=${WISH},' ${WRKSRC}/itk.sh

post-install:
	${FIND} ${STAGEDIR}${PREFIX}/lib/smm -type f | ${XARGS} \
	    ${CHMOD} ${SHAREMODE}
	${FIND} ${STAGEDIR}${PREFIX}/lib/smm -type d | ${XARGS} \
	    ${CHMOD} 755

.include <bsd.port.mk>
