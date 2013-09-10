# Created by: jeffhung
# $FreeBSD: devel/p5-File-Util/Makefile 326702 2013-09-08 05:43:26Z az $

PORTNAME=	File-Util
PORTVERSION=	3.27
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jeffhung@mail2000.com.tw
COMMENT=	Perl5 module for easy, versatile, portable file handling

RUN_DEPENDS=	p5-Class-OOorNO>=0.01:${PORTSDIR}/devel/p5-Class-OOorNO \
		p5-Exception-Handler>=1:${PORTSDIR}/devel/p5-Exception-Handler
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		File::Util.3

.include <bsd.port.mk>
