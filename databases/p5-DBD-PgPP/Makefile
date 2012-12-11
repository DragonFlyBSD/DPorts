# New ports collection makefile for:	p5-DBD-PgPP
# Date created:				August 8th 2004
# Whom:					Lubomir Marinov <lubomir_m@abv.bg>
#
# $FreeBSD: ports/databases/p5-DBD-PgPP/Makefile,v 1.8 2012/11/17 05:55:14 svnexp Exp $
#

PORTNAME=	DBD-PgPP
PORTVERSION=	0.08
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pure Perl PostgreSQL driver for the DBI

BUILD_DEPENDS+=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS+=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI

PERL_CONFIGURE=	yes

MAN3=	DBD::PgPP.3

.include <bsd.port.mk>
