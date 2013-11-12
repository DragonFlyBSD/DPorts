# $FreeBSD: x11-fonts/p5-Font-TTF/Makefile 333536 2013-11-11 20:34:45Z sunpoet $

PORTNAME=	Font-TTF
PORTVERSION=	1.03
CATEGORIES=	x11-fonts perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for TrueType font hacking

LICENSE=	ART20

BUILD_DEPENDS=	p5-IO-String>=0:${PORTSDIR}/devel/p5-IO-String
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
