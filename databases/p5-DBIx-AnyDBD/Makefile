# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: databases/p5-DBIx-AnyDBD/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	DBIx-AnyDBD
PORTVERSION=	2.01
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DBD independent class

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	DBIx::AnyDBD.3

NO_STAGE=	yes
.include <bsd.port.mk>
