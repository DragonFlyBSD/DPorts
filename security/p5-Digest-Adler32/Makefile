# Created by: Gabor Kovesdan
# $FreeBSD: security/p5-Digest-Adler32/Makefile 341825 2014-01-30 09:42:48Z az $

PORTNAME=	Digest-Adler32
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Perl extension for Adler32 hash algorithm

BUILD_DEPENDS=	p5-Digest>=0:${PORTSDIR}/security/p5-Digest
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
