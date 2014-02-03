# Created by: Vladimir Timofeev <vovkasm@gmail.com>
# $FreeBSD: databases/p5-DBIx-Class-FrozenColumns/Makefile 341762 2014-01-29 17:18:46Z az $

PORTNAME=	DBIx-Class-FrozenColumns
PORTVERSION=	0.09
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vovkasm@gmail.com
COMMENT=	Store virtual columns inside another column

RUN_DEPENDS=	p5-DBIx-Class>=0.07003:${PORTSDIR}/databases/p5-DBIx-Class \
		p5-JSON-XS>=0:${PORTSDIR}/converters/p5-JSON-XS \
		p5-Storable>=2.15:${PORTSDIR}/devel/p5-Storable
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
