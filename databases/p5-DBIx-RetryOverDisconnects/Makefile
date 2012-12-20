# Created by: Vladimir Timofeev <vovkasm@gmail.com>
# $FreeBSD: ports/databases/p5-DBIx-RetryOverDisconnects/Makefile,v 1.7 2012/12/05 06:37:39 svnexp Exp $

PORTNAME=	DBIx-RetryOverDisconnects
PORTVERSION=	0.08
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vovkasm@gmail.com
COMMENT=	Keeps database connection persistent

BUILD_DEPENDS=	p5-DBI>0:${PORTSDIR}/databases/p5-DBI \
		p5-Exception-Class>0:${PORTSDIR}/devel/p5-Exception-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	DBIx::RetryOverDisconnects.3

.include <bsd.port.mk>
