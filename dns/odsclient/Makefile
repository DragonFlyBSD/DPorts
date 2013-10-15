# Created by: geniusj@ods.org
# $FreeBSD: dns/odsclient/Makefile 327719 2013-09-20 16:31:57Z bapt $

PORTNAME=	odsclient
PORTVERSION=	1.03
CATEGORIES=	dns
MASTER_SITES=	http://www.ods.org/dl/

MAINTAINER=	jd@ods.org
COMMENT=	ODS Dynamic DNS Client

ALL_TARGET=	odsclient

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s/^(CC|CFLAGS).+//g" ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/odsclient ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}/README
.endif

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
