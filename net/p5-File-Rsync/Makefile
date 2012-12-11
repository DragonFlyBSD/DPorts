# New ports collection makefile for:	p5-File-Rsync
# Date created:				20 May 2001
# Whom:					petef@FreeBSD.org
#
# $FreeBSD: ports/net/p5-File-Rsync/Makefile,v 1.19 2012/11/17 06:00:09 svnexp Exp $
#

PORTNAME=	File-Rsync
PORTVERSION=	0.43
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl convenience wrapper for the rsync(1) program

RUN_DEPENDS=	rsync:${PORTSDIR}/net/rsync
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		File::Rsync.3

.include <bsd.port.mk>
