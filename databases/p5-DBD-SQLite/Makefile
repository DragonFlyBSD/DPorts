# Created by: nork@cityfujisawa.ne.jp
# $FreeBSD: databases/p5-DBD-SQLite/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	DBD-SQLite
PORTVERSION=	1.40
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ISHIGAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides access to SQLite3 databases through the DBI

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DBI>=1.57:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS=	p5-DBI>=1.57:${PORTSDIR}/databases/p5-DBI

USES=		perl5
USE_PERL5=	configure

MAN3=		DBD::SQLite.3 DBD::SQLite::Cookbook.3

NO_STAGE=	yes
.include <bsd.port.mk>
