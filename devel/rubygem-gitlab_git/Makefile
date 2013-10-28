# $FreeBSD: devel/rubygem-gitlab_git/Makefile 331551 2013-10-25 03:20:53Z swills $

PORTNAME=	gitlab_git
PORTVERSION=	2.3.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	GitLab wrapper around git objects

RUN_DEPENDS=	rubygem-activesupport>=3.2.13:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-github-linguist>=2.3.4:${PORTSDIR}/textproc/rubygem-github-linguist \
		rubygem-gitlab-grit>=2.6.0:${PORTSDIR}/textproc/rubygem-gitlab-grit

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes

.include <bsd.port.mk>
