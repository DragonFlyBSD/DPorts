# New ports collection makefile for:	p5-DBIx-SQLite-Simple
# Date created:		26 May 2006
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/databases/p5-DBIx-SQLite-Simple/Makefile,v 1.10 2012/11/17 05:55:15 svnexp Exp $
#

PORTNAME=	DBIx-SQLite-Simple
PORTVERSION=	0.34
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Easy access to SQLite databases using objects

BUILD_DEPENDS=	p5-Class-Gomor>=0:${PORTSDIR}/devel/p5-Class-Gomor \
		p5-DBD-SQLite>=0:${PORTSDIR}/databases/p5-DBD-SQLite
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	DBIx::SQLite::Simple.3 \
	DBIx::SQLite::Simple::Table.3

.include <bsd.port.mk>
