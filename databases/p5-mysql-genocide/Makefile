# New ports collection makefile for:	p5-mysql-genocide
# Date created:				2008/06/16
# Whom:					chinsan
#
# $FreeBSD: ports/databases/p5-mysql-genocide/Makefile,v 1.5 2012/11/17 05:55:17 svnexp Exp $
#

PORTNAME=	mysql-genocide
PORTVERSION=	0.03
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RSOLIV
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parallel operation on MySQL processlist

BUILD_DEPENDS=	p5-DBD-mysql>=0:${PORTSDIR}/databases/p5-DBD-mysql
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
MAN1=		mysql-genocide.1

PLIST_FILES=	bin/mysql-genocide \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/mysql-genocide/.packlist
PLIST_DIRS=	%%SITE_PERL%%/%%PERL_ARCH%%/auto/mysql-genocide

.include <bsd.port.mk>
