# Created by: Vladimir Timofeev <vovkasm@gmail.com>
# $FreeBSD: databases/p5-DBIx-Class-DynamicSubclass/Makefile 326894 2013-09-10 11:32:20Z az $

PORTNAME=	DBIx-Class-DynamicSubclass
PORTVERSION=	0.03
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vovkasm@gmail.com
COMMENT=	Use dynamic subclassing with DBIx::Class

RUN_DEPENDS=	p5-DBIx-Class>=0.07003:${PORTSDIR}/databases/p5-DBIx-Class
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	DBIx::Class::DynamicSubclass.3

.include <bsd.port.mk>
