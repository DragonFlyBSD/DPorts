# New ports collection makefile for:	p5-Dancer-Plugin-Database
# Date created:				Dec 23, 2010
# Whom:					Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/databases/p5-Dancer-Plugin-Database/Makefile,v 1.13 2012/11/17 05:55:15 svnexp Exp $
#

PORTNAME=	Dancer-Plugin-Database
PORTVERSION=	1.82
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easy database connections for Dancer applications

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Dancer>=1.3050:${PORTSDIR}/www/p5-Dancer
RUN_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Dancer>=1.3050:${PORTSDIR}/www/p5-Dancer
TEST_DEPENDS=	p5-DBD-SQLite>=0:${PORTSDIR}/databases/p5-DBD-SQLite \
		p5-Test-Pod>=1.22:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.08:${PORTSDIR}/devel/p5-Test-Pod-Coverage

PERL_CONFIGURE=	yes

MAN3=		Dancer::Plugin::Database.3 \
		Dancer::Plugin::Database::Handle.3

.include <bsd.port.mk>
