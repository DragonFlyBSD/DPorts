# Created by: mat
# $FreeBSD: databases/p5-Class-DBI-BaseDSN/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	Class-DBI-BaseDSN
PORTVERSION=	1.22
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DSN sensitive base class

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Class::DBI::BaseDSN.3

NO_STAGE=	yes
.include <bsd.port.mk>
