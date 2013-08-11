# Created by: mat
# $FreeBSD: devel/p5-Class-Accessor-Chained/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Class-Accessor-Chained
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Make chained accessors

RUN_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::Accessor::Chained.3 \
		Class::Accessor::Chained::Fast.3

.include <bsd.port.mk>
