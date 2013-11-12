# Created by: petef@FreeBSD.org
# $FreeBSD: net/p5-File-Rsync/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	File-Rsync
PORTVERSION=	0.43
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl convenience wrapper for the rsync(1) program

RUN_DEPENDS=	rsync:${PORTSDIR}/net/rsync
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
