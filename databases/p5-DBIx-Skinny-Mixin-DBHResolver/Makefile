# $FreeBSD: databases/p5-DBIx-Skinny-Mixin-DBHResolver/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	DBIx-Skinny-Mixin-DBHResolver
PORTVERSION=	0.04
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension of DBIx::DBHResolver mixin for DBIx::Skinny

RUN_DEPENDS=	\
	p5-DBIx-DBHResolver>0:${PORTSDIR}/databases/p5-DBIx-DBHResolver \
	p5-DBIx-Skinny>0:${PORTSDIR}/databases/p5-DBIx-Skinny
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	DBIx::Skinny::Mixin::DBHResolver.3

NO_STAGE=	yes
.include <bsd.port.mk>
