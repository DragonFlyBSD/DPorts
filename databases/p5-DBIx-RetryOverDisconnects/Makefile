# Created by: Vladimir Timofeev <vovkasm@gmail.com>
# $FreeBSD: databases/p5-DBIx-RetryOverDisconnects/Makefile 327717 2013-09-20 16:13:47Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
