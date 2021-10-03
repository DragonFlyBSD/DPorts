PORTNAME=	vagrant-libvirt
PORTVERSION=	0.5.3
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Vagrant provider plugin to support libvirt

LICENSE=	MIT

RUN_DEPENDS=	rubygem-fog-core>=0:devel/rubygem-fog-core \
		rubygem-fog-libvirt>=0:net/rubygem-fog-libvirt \
		rubygem-rexml>=0:textproc/rubygem-rexml \
		rubygem-nokogiri>=1.6.0:textproc/rubygem-nokogiri \
		vagrant>=0:sysutils/vagrant

USES=		gem
USE_RUBY=	yes

SUB_FILES=	vagrant-libvirt.json
SUB_LIST=	RUBY_VERSION=${RUBY_VERSION}

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/vagrant/plugins.d
	${INSTALL} ${WRKDIR}/vagrant-libvirt.json \
		${STAGEDIR}${PREFIX}/share/vagrant/plugins.d

.include <bsd.port.mk>
