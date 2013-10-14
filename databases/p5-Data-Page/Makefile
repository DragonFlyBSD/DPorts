# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: databases/p5-Data-Page/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	Data-Page
PORTVERSION=	2.02
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pager utility for Class::DBI

BUILD_DEPENDS=	p5-Class-Accessor-Chained>=0:${PORTSDIR}/devel/p5-Class-Accessor-Chained
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Data::Page.3

NO_STAGE=	yes
.include <bsd.port.mk>
