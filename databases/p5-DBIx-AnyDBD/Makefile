# New ports collection makefile for:	DBIx::AnyDBD
# Date created:				31 Dec 2001
# Whom:					Seamus Venasse <svenasse@polaris.ca>
#
# $FreeBSD: ports/databases/p5-DBIx-AnyDBD/Makefile,v 1.13 2012/11/17 05:55:14 svnexp Exp $
#

PORTNAME=	DBIx-AnyDBD
PORTVERSION=	2.01
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DBD independent class

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	DBIx::AnyDBD.3

.include <bsd.port.mk>
