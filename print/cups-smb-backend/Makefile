# New ports collection makefile for:	cups-smb-backend
# Date created:		12 November 2005
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/print/cups-smb-backend/Makefile,v 1.13 2013/01/31 19:48:37 svnexp Exp $
#

PORTNAME=	cups-smb-backend
PORTVERSION=	1.0
PORTREVISION=	6
CATEGORIES=	print
MASTER_SITES=	# empty
DISTFILES=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A CUPS backend for printing to Windows servers

RUN_DEPENDS=	smbspool:${PORTSDIR}/net/${SAMBA_PORT} \
		${LOCALBASE}/sbin/cupsd:${PORTSDIR}/print/cups-base

NO_BUILD=	yes
PLIST_FILES=	libexec/cups/backend/smb
SAMBA_PORT?=	samba36
SUB_FILES=	pkg-message

do-install:
	${LN} -fs ${PREFIX}/bin/smbspool ${PREFIX}/libexec/cups/backend/smb
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
