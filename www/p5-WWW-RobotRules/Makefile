# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: www/p5-WWW-RobotRules/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	WWW-RobotRules
PORTVERSION=	6.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Database of robots.txt-derived permissions

BUILD_DEPENDS=	p5-URI>=1.10:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

CONFLICTS=	p5-libwww-5*

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
