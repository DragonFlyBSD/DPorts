# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: databases/p5-DBIx-XHTML_Table/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	DBIx-XHTML_Table
PORTVERSION=	1.36
CATEGORIES=	databases www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create XHTML tables from SQL queries

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI

USES=		perl5
USE_PERL5=	configure

MAN3=		DBIx::XHTML_Table.3

NO_STAGE=	yes
.include <bsd.port.mk>
