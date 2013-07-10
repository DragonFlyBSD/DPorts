# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/rubygem-pygments.rb/Makefile 322096 2013-06-30 19:07:58Z swills $

PORTNAME=	pygments.rb
PORTVERSION=	0.5.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Exposes the pygments syntax highlighter to Ruby

RUN_DEPENDS=	rubygem-posix-spawn>=0.3.6:${PORTSDIR}/devel/rubygem-posix-spawn \
		rubygem-yajl-ruby>=1.1.0:${PORTSDIR}/devel/rubygem-yajl-ruby \
		pygmentize:${PORTSDIR}/textproc/py-pygments

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
