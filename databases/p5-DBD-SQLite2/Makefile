# New ports collection makefile for:	p5-DBD-SQLite
# Date created:				2002/03/30
# Whom:					nork@cityfujisawa.ne.jp
#
# $FreeBSD: ports/databases/p5-DBD-SQLite2/Makefile,v 1.22 2012/11/17 05:55:14 svnexp Exp $
#

PORTNAME=	DBD-SQLite2
PORTVERSION=	0.33
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides access to SQLite2 databases through the DBI

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI

PERL_CONFIGURE=	yes

MAN3=		DBD::SQLite2.3

post-extract:
	${RM} -f ${WRKSRC}/getsqlite.pl

.include <bsd.port.mk>
