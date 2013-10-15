# Created by: walt
# $FreeBSD: sysutils/monitord/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	monitord
PORTVERSION=	0.4.1
PORTREVISION=	3
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ftp.erudition.net/pub/monitord/ CENKES

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Service that restarts other standalone services

USE_RC_SUBR=	monitord
MAN8=		monitord.8

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|syslodg|syslogd|' ${WRKSRC}/${MAN8}
	@${REINPLACE_CMD} -e 's|-pipe||' ${WRKSRC}/Makefile

post-install:
	@${INSTALL_DATA} ${WRKSRC}/monitord.conf.sample \
		${PREFIX}/etc/monitord.conf.sample
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
