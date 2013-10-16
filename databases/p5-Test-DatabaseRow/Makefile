# Created by: Joshua D. Abraham <jabra@ccs.neu.edu>
# $FreeBSD: databases/p5-Test-DatabaseRow/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	Test-DatabaseRow
PORTVERSION=	2.03
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Simple database tests

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Test::DatabaseRow.3 \
		Test::DatabaseRow::Result.3 \
		Test::DatabaseRow::Object.3

NO_STAGE=	yes
.include <bsd.port.mk>
