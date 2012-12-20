# ex:ts=8
# Ports collection makefile for:	Class::DBI::AutoLoader
# Date created:			Sep 23, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/databases/p5-Class-DBI-AutoLoader/Makefile,v 1.6 2012/11/17 05:55:13 svnexp Exp $
#

PORTNAME=	Class-DBI-AutoLoader
PORTVERSION=	0.12
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generates Class::DBI subclasses dynamically

BUILD_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI \
		p5-Class-DBI-BaseDSN>=0:${PORTSDIR}/databases/p5-Class-DBI-BaseDSN
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Class::DBI::AutoLoader.3

.include <bsd.port.mk>
