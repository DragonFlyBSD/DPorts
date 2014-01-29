# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: www/smb_auth/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	smb_auth
PORTVERSION=	0.05
PORTREVISION=	5
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	dinoex

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	A proxy authentication module against an SMB server

.if !defined(WITHOUT_REGISTER_SAMBA)
RUN_DEPENDS=	${LOCALBASE}/sbin/smbd:${PORTSDIR}/${SAMBA_PORT}
.endif

ALL_TARGET=	smb_auth
SAMBA_PORT?=	net/samba36

.include <bsd.port.options.mk>

do-install:
		${INSTALL_PROGRAM} ${WRKSRC}/smb_auth ${STAGEDIR}${PREFIX}/bin/
		${INSTALL_SCRIPT} ${WRKSRC}/smb_auth.sh ${STAGEDIR}${PREFIX}/bin/
.if ${PORT_OPTIONS:MDOCS}
		${MKDIR} ${STAGEDIR}${DOCSDIR}
		${INSTALL_DATA} ${FILESDIR}/README ${STAGEDIR}${DOCSDIR}/
.endif

.include <bsd.port.mk>
