# Created by: Gregory Edigarov <greg@bestnet.kharkov.ua>
# $FreeBSD: net/sflowtool/Makefile 315465 2013-03-28 13:03:40Z ohauer $

PORTNAME=	sflowtool
PORTVERSION=	3.28
CATEGORIES=	net
MASTER_SITES=	http://www.inmon.com/bin/

MAINTAINER=	ohauer@FreeBSD.org
COMMENT=	This is a sFlow capture and sFlow-to-NetFlow conversion tool

GNU_CONFIGURE=	yes
USE_RC_SUBR=	${PORTNAME}

PLIST_FILES=	bin/sflowtool
PORTDOCS=	README
PORTEXAMPLES=	README ipTopTalkers ipTrafficMatrix sflowRRDChart.cgi \
		sflowRRDLoad sflowenable

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif
.if ${PORT_OPTIONS:MEXAMPLES}
	@${MKDIR} ${EXAMPLESDIR}
. for f in ${PORTEXAMPLES}
	@${INSTALL_DATA} ${WRKSRC}/scripts/$f ${EXAMPLESDIR}/
. endfor
.endif

.include <bsd.port.mk>
