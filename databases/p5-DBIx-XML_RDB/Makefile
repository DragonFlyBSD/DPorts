# New ports collection makefile for:	p5-DBIx-XML_RDB
# Date created:				May 26 2001
# Whom:					vanilla
#
# $FreeBSD: ports/databases/p5-DBIx-XML_RDB/Makefile,v 1.11 2012/11/17 05:55:15 svnexp Exp $
#

PORTNAME=	DBIx-XML_RDB
PORTVERSION=	0.05
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl extension for creating XML from existing DBI datasources

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		DBIx::XML_RDB.3

.include <bsd.port.mk>
