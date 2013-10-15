# Created by: Murray Stokely <murray@cdrom.com>
# $FreeBSD: mail/mailcrypt/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	mailcrypt
PORTVERSION=	3.5.9
PORTREVISION=	5
CATEGORIES=	mail
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An Emacs/PGP interface

GNU_CONFIGURE=	yes
MAKE_ARGS=	lispdir=${PREFIX}/${EMACS_VERSION_SITE_LISPDIR}/${PORTNAME}
USE_AUTOTOOLS=	autoconf
USE_EMACS=	yes
USE_GMAKE=	yes

INFO=		mailcrypt

NO_STAGE=	yes
.include <bsd.port.mk>
