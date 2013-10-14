# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: misc/p5-Array-Diff/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	Array-Diff
PORTVERSION=	0.07
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Diff two arrays

RUN_DEPENDS=	p5-Algorithm-Diff>=1.19:${PORTSDIR}/devel/p5-Algorithm-Diff \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Array::Diff.3

NO_STAGE=	yes
.include <bsd.port.mk>
