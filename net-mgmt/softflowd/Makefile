# Created by: Janos Mohacsi <janos.mohacsi@bsd.hu>
# $FreeBSD: net-mgmt/softflowd/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	softflowd
PORTVERSION=	0.9.8
PORTREVISION=	2
CATEGORIES=	net-mgmt ipv6
MASTER_SITES=	http://www2.mindrot.org/files/softflowd/

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Softflowd is flow-based network traffic analyser with export

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
PLIST_FILES=	sbin/softflowd sbin/softflowctl
MAN8=		softflowd.8 softflowctl.8
PORTDOCS=	README
USE_RC_SUBR=	softflowd

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
