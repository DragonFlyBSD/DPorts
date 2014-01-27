# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: www/p5-CGI-Untaint-date/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	CGI-Untaint-date
PORTVERSION=	1.00
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Validate a date

BUILD_DEPENDS=	p5-CGI-Untaint>=0:${PORTSDIR}/www/p5-CGI-Untaint \
		p5-Date-Manip>=0:${PORTSDIR}/devel/p5-Date-Manip \
		p5-Date-Simple>=0:${PORTSDIR}/devel/p5-Date-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
