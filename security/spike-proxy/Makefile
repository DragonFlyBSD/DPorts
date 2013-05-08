# Ports collection makefile for:	spike-proxy
# Date created:				2 Aug 2004
# Whom:					Yonatan <Yonatan@xpert.com>
#
# $FreeBSD: ports/security/spike-proxy/Makefile,v 1.4 2012/11/17 06:01:20 svnexp Exp $
#

PORTNAME=	spike-proxy
PORTVERSION=	1.4.8
CATEGORIES=	security
MASTER_SITES=	http://www.immunitysec.com/downloads/
DISTNAME=	SP${PORTVERSION:tl:C/\.//g}
EXTRACT_SUFX=	.tgz

MAINTAINER=	onatan@gmail.com
COMMENT=	Tool for looking for vulnerabilities in web applications

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/OpenSSL/SSL.so:${PORTSDIR}/security/py-openssl

WRKSRC=		${WRKDIR}/spkproxy
USE_PYTHON=	yes
NO_BUILD=	yes

post-patch:
	@${REINPLACE_CMD} "s|\#\!/usr/bin/python|\#\!${LOCALBASE}/bin/python|" ${WRKSRC}/*.py

do-install:
	@${MKDIR} ${DATADIR}
	@${RM} -rf ${WRKSRC}/*.bak
	${CP} -Rp ${WRKSRC}/* ${DATADIR}/
	${SED} "s|DATADIR|${DATADIR}|" ${SCRIPTDIR}/spkproxy.sh > ${PREFIX}/bin/spkproxy.sh
	@${CHMOD} 755 ${PREFIX}/bin/spkproxy.sh
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for f in WHYGPL.txt TODO.txt SpikeUsage.txt README.txt CHANGELOG.txt
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
