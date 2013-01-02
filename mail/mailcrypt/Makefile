# New ports collection makefile for:	mailcrypt
# Date created:        29 May 1998
# Whom:                Murray Stokely <murray@cdrom.com>
#
# $FreeBSD: ports/mail/mailcrypt/Makefile,v 1.31 2012/11/17 05:59:05 svnexp Exp $
#

PORTNAME=	mailcrypt
PORTVERSION=	3.5.9
PORTREVISION=	4
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

.include <bsd.port.mk>
