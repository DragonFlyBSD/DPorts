# New ports collection makefile for:	p5-Data-Page
# Date created:	   21 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/databases/p5-Data-Page/Makefile,v 1.15 2012/11/17 05:55:16 svnexp Exp $
#

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

PERL_MODBUILD=	yes

MAN3=		Data::Page.3

.include <bsd.port.mk>
