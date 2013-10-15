# Created by: Rodrigo OSORIO <rodrigo@bebik.net>
# $FreeBSD: textproc/p5-libsoldout/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	libsoldout
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ROS
PKGNAMEPREFIX=	p5-

MAINTAINER=	rodrigo@bebik.net
COMMENT=	Convert Markdown text in (X)HTML

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

LIB_DEPENDS=	soldout:${PORTSDIR}/textproc/libsoldout

USES=		perl5
USE_PERL5=	configure
USE_LDCONFIG=	yes

MAN3=		libsoldout.3

NO_STAGE=	yes
.include <bsd.port.mk>
