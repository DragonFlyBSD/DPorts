# Created by: Vladimir Timofeev <vovkasm@gmail.com>
# $FreeBSD: databases/p5-DBIx-RetryOverDisconnects/Makefile 326896 2013-09-10 12:14:21Z az $

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

USES=		perl5
USE_PERL5=	configure

MAN3=	DBIx::RetryOverDisconnects.3

.include <bsd.port.mk>
