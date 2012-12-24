# New ports collection makefile for:	cftp
# Date created:				14 October 1997
# Whom:					Andrey Zakhvatov
#
# $FreeBSD: ports/ftp/cftp/Makefile,v 1.32 2012/12/06 16:41:45 svnexp Exp $
#

PORTNAME=	cftp
PORTVERSION=	0.12
PORTREVISION=	3
CATEGORIES=	ftp ipv6
MASTER_SITES=	ftp://ftp.giga.or.at/pub/nih/cftp/ \
		ftp://sunsite.univie.ac.at/pub/nih/cftp/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Comfortable FTP, a full screen ftp client

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-sftp

PLIST_FILES=	bin/cftp
INFO=		cftp

.include <bsd.port.mk>
